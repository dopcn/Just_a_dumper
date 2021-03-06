//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QHSSampledItem : NSObject
{
    _Bool _isSampled;
    int _lastSamplingRateValue;
    _Bool _logEnabled;
    int _itemId;
}

@property(nonatomic) int itemId; // @synthesize itemId=_itemId;
- (int)readLastSamplingRateValue;
- (_Bool)readLastSamplingResult;
- (id)keyIsSampled;
- (id)keyLastSamplingRate;
- (void)updateWithSamplingRate:(unsigned int)arg1;
@property(readonly, nonatomic) _Bool isSampled;
- (id)initWithItemId:(int)arg1;

@end

