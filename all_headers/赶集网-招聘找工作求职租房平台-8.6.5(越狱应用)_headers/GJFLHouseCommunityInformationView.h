//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GJFLCommunityEntity, GJFLPostDetailEntity;

@interface GJFLHouseCommunityInformationView : UIView
{
    GJFLPostDetailEntity *_postEntity;
    GJFLCommunityEntity *_communityEntity;
    CDUnknownBlockType _secondHouseButtonCallback;
    CDUnknownBlockType _rentHouseAction;
    double _tempHeight;
}

@property(nonatomic) double tempHeight; // @synthesize tempHeight=_tempHeight;
@property(copy, nonatomic) CDUnknownBlockType rentHouseAction; // @synthesize rentHouseAction=_rentHouseAction;
@property(copy, nonatomic) CDUnknownBlockType secondHouseButtonCallback; // @synthesize secondHouseButtonCallback=_secondHouseButtonCallback;
@property(retain, nonatomic) GJFLCommunityEntity *communityEntity; // @synthesize communityEntity=_communityEntity;
@property(retain, nonatomic) GJFLPostDetailEntity *postEntity; // @synthesize postEntity=_postEntity;
- (void).cxx_destruct;
- (void)secondHouseClcickAction:(id)arg1;
- (void)rentHouseClcickAction:(id)arg1;
- (id)shopsAndOfficesViewWithFrame:(struct CGRect)arg1;
- (void)lineViewWithLeft:(double)arg1 width:(double)arg2 withHeight:(double)arg3 inSuperView:(id)arg4;
- (void)communityMoreInfoViewWithFrame:(struct CGRect)arg1 inSuperView:(id)arg2;
- (id)viewWithArrowTitle:(id)arg1 desc:(id)arg2;
- (void)houseCellViewWithFrame:(struct CGRect)arg1 inSuperView:(id)arg2;
- (id)houseSourceWithTitle:(id)arg1 withNum:(id)arg2 withDesc:(id)arg3 withFont:(id)arg4 withFame:(struct CGRect)arg5;
- (void)loadCommunityInformationView;
- (id)initWithFrame:(struct CGRect)arg1 withEntity:(id)arg2 withRentCommunityBlock:(CDUnknownBlockType)arg3 secondHouseButtonCallback:(CDUnknownBlockType)arg4;

@end

