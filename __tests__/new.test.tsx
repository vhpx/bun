import { addTimeblocks } from './add-timeblocks';
import { Timeblock } from './timeblock';

describe('addTimeblocks', () => {
  it('should add multiple timeblocks', () => {
    const prevTimeblocks: Timeblock[] = [
      { startTime: '09:00', endTime: '10:00', label: 'Work' },
      { startTime: '11:00', endTime: '12:00', label: 'Lunch' },
    ];

    const newTimeblocks: Timeblock[] = [
      { startTime: '13:00', endTime: '14:00', label: 'Meeting' },
      { startTime: '15:00', endTime: '16:00', label: 'Work' },
    ];

    const result = addTimeblocks(prevTimeblocks, newTimeblocks);

    expect(result).toEqual([
      { startTime: '09:00', endTime: '10:00', label: 'Work' },
      { startTime: '11:00', endTime: '12:00', label: 'Lunch' },
      { startTime: '13:00', endTime: '14:00', label: 'Meeting' },
      { startTime: '15:00', endTime: '16:00', label: 'Work' },
    ]);
  });

  it('should add a single timeblock', () => {
    const prevTimeblocks: Timeblock[] = [
      { startTime: '09:00', endTime: '10:00', label: 'Work' },
      { startTime: '11:00', endTime: '12:00', label: 'Lunch' },
    ];

    const newTimeblocks: Timeblock = {
      startTime: '13:00',
      endTime: '14:00',
      label: 'Meeting',
    };

    const result = addTimeblocks(prevTimeblocks, newTimeblocks);

    expect(result).toEqual([
      { startTime: '09:00', endTime: '10:00', label: 'Work' },
      { startTime: '11:00', endTime: '12:00', label: 'Lunch' },
      { startTime: '13:00', endTime: '14:00', label: 'Meeting' },
    ]);
  });

  it('should insert timeblocks in the correct order', () => {
    const prevTimeblocks: Timeblock[] = [
      { startTime: '09:00', endTime: '10:00', label: 'Work' },
      { startTime: '12:00', endTime: '13:00', label: 'Lunch' },
    ];

    const newTimeblocks: Timeblock[] = [
      { startTime: '11:00', endTime: '12:00', label: 'Meeting' },
      { startTime: '13:00', endTime: '14:00', label: 'Work' },
    ];

    const result = addTimeblocks(prevTimeblocks, newTimeblocks);

    expect(result).toEqual([
      { startTime: '09:00', endTime: '10:00', label: 'Work' },
      { startTime: '11:00', endTime: '12:00', label: 'Meeting' },
      { startTime: '12:00', endTime: '13:00', label: 'Lunch' },
      { startTime: '13:00', endTime: '14:00', label: 'Work' },
    ]);
  });

  it('should handle overlapping timeblocks', () => {
    const prevTimeblocks: Timeblock[] = [
      { startTime: '09:00', endTime: '10:00', label: 'Work' },
      { startTime: '11:00', endTime: '12:00', label: 'Lunch' },
    ];

    const newTimeblocks: Timeblock[] = [
      { startTime: '10:00', endTime: '11:00', label: 'Meeting' },
      { startTime: '13:00', endTime: '14:00', label: 'Work' },
    ];

    const result = addTimeblocks(prevTimeblocks, newTimeblocks);

    expect(result).toEqual([
      { startTime: '09:00', endTime: '11:00', label: 'Work' },
      { startTime: '11:00', endTime: '12:00', label: 'Meeting' },
      { startTime: '12:00', endTime: '13:00', label: 'Lunch' },
      { startTime: '13:00', endTime: '14:00', label: 'Work' },
    ]);
  });
});