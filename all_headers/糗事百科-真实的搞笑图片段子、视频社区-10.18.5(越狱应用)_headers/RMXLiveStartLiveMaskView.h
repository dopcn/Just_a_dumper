//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RMXHitTestView.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CAGradientLayer, CLLocationManager, CLPlacemark, NSArray, NSLayoutConstraint, NSString, RMXLiveSwitchHDSDMaskView, UIButton, UICollectionView, UIImageView, UILabel, UITextField, UIView;

@interface RMXLiveStartLiveMaskView : RMXHitTestView <UITextFieldDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, CLLocationManagerDelegate>
{
    _Bool _locationOn;
    UITextField *_textField;
    UIButton *_prettyFaceBtn;
    UIImageView *_coverImageView;
    CDUnknownBlockType _closeBtnActionHandler;
    CDUnknownBlockType _prettyFaceBtnActionHandler;
    CDUnknownBlockType _reverseCameraBtnActionHandler;
    CDUnknownBlockType _startLiveBtnActionHandler;
    CDUnknownBlockType _outOfLimitHandler;
    CDUnknownBlockType _coverPreviewHandler;
    CDUnknownBlockType _changeCoverHandler;
    NSArray *_canCreateGames;
    long long _liveGameType;
    UIButton *_cancelStartLivingBtn;
    UIImageView *_reverseCameraImageView;
    UIView *_prettyFaceContainerView;
    UIImageView *_prettyFaceImageView;
    UIView *_gameContainerView;
    UIImageView *_gameImageView;
    UIView *_gameSelectionView;
    NSArray *_gameBtnArray;
    UIButton *_startLivingBtn;
    UIView *_contentView;
    UIView *_gradientView;
    CAGradientLayer *_gradientLayer;
    UILabel *_locationLabel;
    UIImageView *_locationImageView;
    UICollectionView *_collectionView;
    NSArray *_shareDataSource;
    CLPlacemark *_placemark;
    CLLocationManager *_locationManager;
    NSLayoutConstraint *_btnsTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    RMXLiveSwitchHDSDMaskView *_HDSDSwitchMaskView;
    UIButton *_HDSDBtn;
}

@property(nonatomic) __weak UIButton *HDSDBtn; // @synthesize HDSDBtn=_HDSDBtn;
@property(nonatomic) __weak RMXLiveSwitchHDSDMaskView *HDSDSwitchMaskView; // @synthesize HDSDSwitchMaskView=_HDSDSwitchMaskView;
@property(nonatomic) __weak NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *btnsTopConstraint; // @synthesize btnsTopConstraint=_btnsTopConstraint;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(nonatomic) _Bool locationOn; // @synthesize locationOn=_locationOn;
@property(retain, nonatomic) NSArray *shareDataSource; // @synthesize shareDataSource=_shareDataSource;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UIImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property(nonatomic) __weak UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) __weak UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIButton *startLivingBtn; // @synthesize startLivingBtn=_startLivingBtn;
@property(retain, nonatomic) NSArray *gameBtnArray; // @synthesize gameBtnArray=_gameBtnArray;
@property(retain, nonatomic) UIView *gameSelectionView; // @synthesize gameSelectionView=_gameSelectionView;
@property(nonatomic) __weak UIImageView *gameImageView; // @synthesize gameImageView=_gameImageView;
@property(nonatomic) __weak UIView *gameContainerView; // @synthesize gameContainerView=_gameContainerView;
@property(nonatomic) __weak UIImageView *prettyFaceImageView; // @synthesize prettyFaceImageView=_prettyFaceImageView;
@property(nonatomic) __weak UIView *prettyFaceContainerView; // @synthesize prettyFaceContainerView=_prettyFaceContainerView;
@property(nonatomic) __weak UIImageView *reverseCameraImageView; // @synthesize reverseCameraImageView=_reverseCameraImageView;
@property(nonatomic) __weak UIButton *cancelStartLivingBtn; // @synthesize cancelStartLivingBtn=_cancelStartLivingBtn;
@property(nonatomic) long long liveGameType; // @synthesize liveGameType=_liveGameType;
@property(copy, nonatomic) NSArray *canCreateGames; // @synthesize canCreateGames=_canCreateGames;
@property(copy, nonatomic) CDUnknownBlockType changeCoverHandler; // @synthesize changeCoverHandler=_changeCoverHandler;
@property(copy, nonatomic) CDUnknownBlockType coverPreviewHandler; // @synthesize coverPreviewHandler=_coverPreviewHandler;
@property(copy, nonatomic) CDUnknownBlockType outOfLimitHandler; // @synthesize outOfLimitHandler=_outOfLimitHandler;
@property(copy, nonatomic) CDUnknownBlockType startLiveBtnActionHandler; // @synthesize startLiveBtnActionHandler=_startLiveBtnActionHandler;
@property(copy, nonatomic) CDUnknownBlockType reverseCameraBtnActionHandler; // @synthesize reverseCameraBtnActionHandler=_reverseCameraBtnActionHandler;
@property(copy, nonatomic) CDUnknownBlockType prettyFaceBtnActionHandler; // @synthesize prettyFaceBtnActionHandler=_prettyFaceBtnActionHandler;
@property(copy, nonatomic) CDUnknownBlockType closeBtnActionHandler; // @synthesize closeBtnActionHandler=_closeBtnActionHandler;
@property(nonatomic) __weak UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(readonly, nonatomic) __weak UIButton *prettyFaceBtn; // @synthesize prettyFaceBtn=_prettyFaceBtn;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)startLiveBtnAction:(id)arg1;
- (void)reverseBtnAction:(id)arg1;
- (void)prettyFaceBtnAction:(id)arg1;
- (void)closeBtnAction:(id)arg1;
- (void)HDSDBtnAction:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)didTapCoverImage:(id)arg1;
- (void)updateGameCollectionViewWithGame:(id)arg1;
- (void)didTapLocationView:(id)arg1;
- (void)onSelectGameType:(id)arg1;
- (void)didTapGameView:(id)arg1;
- (void)updateLcoation;
- (void)layoutSubviews;
- (void)updateStudyMaskViewFrameIfNeeded;
- (void)changeAsHDModel:(_Bool)arg1;
- (void)awakeFromNib;
- (id)toShareElements;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

