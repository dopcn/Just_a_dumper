//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UIView, UIVisualEffectView, UserSettingAreaObject;
@protocol UserSettingAreaPickerDelegate;

@interface UserSettingAreaPickerController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIVisualEffectView *_effectView;
    UIImageView *_bgView;
    NSArray *_recieveObjectArray;
    id <UserSettingAreaPickerDelegate> _delegate;
    NSString *_locationName;
    UIImageView *_backgroundImageView;
    UIView *_topBar;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UITableView *_areaTableView;
    NSMutableArray *_prepareObjectArray;
    NSArray *_areaObjectArray;
    NSString *_choosenAreaCode;
    UserSettingAreaObject *_areaObject;
    long long _choosenIndex;
}

@property(nonatomic) long long choosenIndex; // @synthesize choosenIndex=_choosenIndex;
@property(retain, nonatomic) UserSettingAreaObject *areaObject; // @synthesize areaObject=_areaObject;
@property(retain, nonatomic) NSString *choosenAreaCode; // @synthesize choosenAreaCode=_choosenAreaCode;
@property(retain, nonatomic) NSArray *areaObjectArray; // @synthesize areaObjectArray=_areaObjectArray;
@property(retain, nonatomic) NSMutableArray *prepareObjectArray; // @synthesize prepareObjectArray=_prepareObjectArray;
@property(retain, nonatomic) UITableView *areaTableView; // @synthesize areaTableView=_areaTableView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(nonatomic) __weak id <UserSettingAreaPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *recieveObjectArray; // @synthesize recieveObjectArray=_recieveObjectArray;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getAreaObjectArray;
- (_Bool)prefersStatusBarHidden;
- (void)backButtonAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)configSubviewsFrame;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithBlurImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

