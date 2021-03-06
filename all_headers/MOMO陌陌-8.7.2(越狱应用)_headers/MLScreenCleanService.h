//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface MLScreenCleanService : NSObject
{
    _Bool _shouldShowCardAnimation;
    _Bool _showedScreenClean;
    _Bool _selectedScreenClean;
    NSDate *_lastGiftDate;
    long long _giftCount;
}

@property(readonly, nonatomic) _Bool selectedScreenClean; // @synthesize selectedScreenClean=_selectedScreenClean;
@property(readonly, nonatomic) long long giftCount; // @synthesize giftCount=_giftCount;
@property(retain, nonatomic) NSDate *lastGiftDate; // @synthesize lastGiftDate=_lastGiftDate;
@property(nonatomic) _Bool showedScreenClean; // @synthesize showedScreenClean=_showedScreenClean;
@property(readonly, nonatomic) _Bool shouldShowCardAnimation; // @synthesize shouldShowCardAnimation=_shouldShowCardAnimation;
- (void).cxx_destruct;
- (void)setSelectedScreenCleanIfNeeded;
- (void)clean;
- (void)increaseGiftCount:(long long)arg1;

@end

