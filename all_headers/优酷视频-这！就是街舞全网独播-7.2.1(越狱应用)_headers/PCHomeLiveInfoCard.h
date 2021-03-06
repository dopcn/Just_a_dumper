//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PCHomeCard.h"

@class PCHomeLiveInfoCell, PCLiveInfo;

@interface PCHomeLiveInfoCard : PCHomeCard
{
    PCLiveInfo *_liveInfo;
    PCHomeLiveInfoCell *_liveInfoCell;
}

@property(nonatomic) __weak PCHomeLiveInfoCell *liveInfoCell; // @synthesize liveInfoCell=_liveInfoCell;
@property(retain, nonatomic) PCLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
- (void).cxx_destruct;
- (id)p_attributedStringWithTimeComponent:(long long)arg1 appendingString:(id)arg2;
- (id)p_imageNameWithLiveStatus:(long long)arg1;
- (id)p_attributedString:(id)arg1 color:(id)arg2 fontSize:(double)arg3;
- (id)p_titleWithLiveStatus:(long long)arg1 owner:(_Bool)arg2;
- (id)p_detailStringWithLiveStatus:(long long)arg1 owner:(_Bool)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (long long)numberOfRows;

@end

