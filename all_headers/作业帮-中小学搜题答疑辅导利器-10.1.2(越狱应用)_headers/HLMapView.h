//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface HLMapView : UIImageView
{
    CDUnknownBlockType _mapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType mapBlock; // @synthesize mapBlock=_mapBlock;
- (void).cxx_destruct;
- (double)getRightPositionWithDistance:(double)arg1 WithHorizon:(_Bool)arg2;
- (void)reloadBossViewWithModel:(id)arg1;
- (void)reloadFriendViewWithModel:(id)arg1;
- (void)reloadBoxViewWithModel:(id)arg1;
- (void)reloadNormalLeveViewWithModel:(id)arg1;
- (void)reloadVideoViewWithModel:(id)arg1;
- (void)reloadSubViewWithData:(id)arg1;
- (void)setUpSubViewsWithDataSource:(id)arg1;

@end

