//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYChannelModuleUIManager.h"

#import "IWeekStarDataProviderDelegate-Protocol.h"

@class NSString, YYWeekStarModuleView;

@interface YYWeekStarModuleManager : YYChannelModuleUIManager <IWeekStarDataProviderDelegate>
{
    YYWeekStarModuleView *_weekStarModuleView;
}

@property(nonatomic) __weak YYWeekStarModuleView *weekStarModuleView; // @synthesize weekStarModuleView=_weekStarModuleView;
- (void).cxx_destruct;
- (void)doAnimationWithWeekStarInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

