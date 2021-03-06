//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DMuDataItem.h"

#import "DMuDataItemActionProtocol-Protocol.h"

@class NSString;

@interface DMuTextDataItem : DMuDataItem <DMuDataItemActionProtocol>
{
    CDUnknownBlockType _tapGestureBlk;
    long long _tapEffect;
    NSString *_text;
    long long _colorType;
}

@property(nonatomic) long long colorType; // @synthesize colorType=_colorType;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long tapEffect; // @synthesize tapEffect=_tapEffect;
@property(copy, nonatomic) CDUnknownBlockType tapGestureBlk; // @synthesize tapGestureBlk=_tapGestureBlk;
- (void)dealloc;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

