//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GJUIViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class GJHeaderSwitchControl, GJLSCarRentalListEntity, GJLSDetailContactView, GJLSPostEntity, NSString, UIScrollView;

@interface GJLSCarRentalListView : GJUIViewController <UIScrollViewDelegate>
{
    _Bool _isShowingMoreDetail;
    int _currentSelectType;
    NSString *_category_id;
    NSString *_minor_category_id;
    NSString *_puid;
    NSString *_major_category_script_index;
    UIScrollView *_carWithDriverScrollView;
    UIScrollView *_carSelfDrivingScrollView;
    GJHeaderSwitchControl *_topSwitchControl;
    double _yPosition;
    GJLSPostEntity *_postEntity;
    GJLSDetailContactView *_phoneView;
    GJLSCarRentalListEntity *_Entity;
}

@property(nonatomic) int currentSelectType; // @synthesize currentSelectType=_currentSelectType;
@property(retain, nonatomic) GJLSCarRentalListEntity *Entity; // @synthesize Entity=_Entity;
@property(retain, nonatomic) GJLSDetailContactView *phoneView; // @synthesize phoneView=_phoneView;
@property(nonatomic) _Bool isShowingMoreDetail; // @synthesize isShowingMoreDetail=_isShowingMoreDetail;
@property(retain, nonatomic) GJLSPostEntity *postEntity; // @synthesize postEntity=_postEntity;
@property(nonatomic) double yPosition; // @synthesize yPosition=_yPosition;
@property(retain, nonatomic) GJHeaderSwitchControl *topSwitchControl; // @synthesize topSwitchControl=_topSwitchControl;
@property(retain, nonatomic) UIScrollView *carSelfDrivingScrollView; // @synthesize carSelfDrivingScrollView=_carSelfDrivingScrollView;
@property(retain, nonatomic) UIScrollView *carWithDriverScrollView; // @synthesize carWithDriverScrollView=_carWithDriverScrollView;
@property(copy, nonatomic) NSString *major_category_script_index; // @synthesize major_category_script_index=_major_category_script_index;
@property(copy, nonatomic) NSString *puid; // @synthesize puid=_puid;
@property(copy, nonatomic) NSString *minor_category_id; // @synthesize minor_category_id=_minor_category_id;
@property(copy, nonatomic) NSString *category_id; // @synthesize category_id=_category_id;
- (void).cxx_destruct;
- (void)addlogWithLogId:(id)arg1 withPuid:(id)arg2 withName:(id)arg3;
- (void)goBack;
- (void)loadDataFromNetWork;
- (void)log100000002040000100000010;
- (void)call;
- (void)addPhoneView;
- (void)addDescriptionViewWithEntity:(id)arg1 OnSuperScrollView:(id)arg2;
- (id)addCarAbstractViewWithSuperScrollView:(id)arg1;
- (void)addCarWithDriverView;
- (void)addCarSelfDrivingView;
- (void)addHeaderSwitchControl;
- (void)addCarSubView:(id)arg1;
- (void)resetScrollViewWithSuperView:(id)arg1;
- (void)changeHeightOfScrollView:(id)arg1;
- (void)layoutCarSelfDrivingScrollView;
- (void)layoutCarWithDriverScrollView;
- (void)layoutSubViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

