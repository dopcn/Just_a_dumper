//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QNBTVGuildTipViewHandler : NSObject
{
}

+ (double)getCurrentTime;
+ (void)showTVGuildTipViewSuccessedWithType:(long long)arg1 scene:(long long)arg2;
+ (id)createProgressButtonInfoWithType:(unsigned long long)arg1 progress:(long long)arg2 backgroudColorIsDarkType:(_Bool)arg3;
+ (id)createDefaultProgressButtonInfoWithType:(long long)arg1 backgroudColorIsDarkType:(_Bool)arg2;
+ (id)getTVGuildTipViewInfoWithType:(long long)arg1 scene:(long long)arg2;
+ (_Bool)shouldShowPlayerOneStepInstallGuildTipView;
+ (_Bool)shouldShowBindGuildTipView;
+ (_Bool)shouldShowVideoDetailBindGuildTipView;
+ (_Bool)shouldShowProjectionGuildInstallTipView;
+ (_Bool)shouldShowProjectionOneStepInstallGuildTipView;
+ (_Bool)shouldShowProjectionBindGuildTipView;
+ (_Bool)shouldShowTVGuildTipViewWIthType:(long long)arg1 scene:(long long)arg2;
+ (id)createTVGuildTipViewWithType:(long long)arg1 scene:(long long)arg2;

@end

