//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "STCircularBufferModel.h"

@class NSMutableArray;

@interface STCircularBluetoothQueueBufferModel : STCircularBufferModel
{
    NSMutableArray *_everyMesgLength;
    unsigned long long _mesgCount;
}

@property(nonatomic) unsigned long long mesgCount; // @synthesize mesgCount=_mesgCount;
@property(retain, nonatomic) NSMutableArray *everyMesgLength; // @synthesize everyMesgLength=_everyMesgLength;
- (void).cxx_destruct;
- (char *)readBluetoothMesgFromBufferWithLength:(unsigned int *)arg1;
- (void)appendWithDataByte:(char *)arg1 byteLength:(unsigned int)arg2;
- (id)initWithCircularBufferSize:(int)arg1;

@end

