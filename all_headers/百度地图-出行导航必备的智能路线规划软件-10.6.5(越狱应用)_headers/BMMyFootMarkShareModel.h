//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BMMyFootMarkShareModel : NSObject
{
}

+ (id)sharedInstance;
- (void)shareRoutineWithEntity:(id)arg1;
- (void)shareExploreWithEntity:(id)arg1 withCityLevle:(id)arg2 withTile:(id)arg3;
- (void)shareCustomBaseWithEntity:(id)arg1;
- (void)shareWalkNaviBaseWithEntity:(id)arg1;
- (void)shareCarNaviBaseWithEntity:(id)arg1;
- (void)sharePointWithEntity:(id)arg1;
- (void)shareCustomNaviFinishWithEntity:(id)arg1;
- (void)shareCustomNaviWithEntity:(id)arg1;
- (void)shareCycleNaviFinishWithEntity:(id)arg1 withImage:(id)arg2;
- (void)shareWalkNaviFnishWithEntity:(id)arg1 withShareImage:(id)arg2;
- (void)shareWalkNaviWithEntity:(id)arg1;
- (void)shareCarNaviFinishWithEntity:(id)arg1 withCarOnwerData:(id)arg2;
- (void)shareCarNaviWithEntity:(id)arg1;

@end

