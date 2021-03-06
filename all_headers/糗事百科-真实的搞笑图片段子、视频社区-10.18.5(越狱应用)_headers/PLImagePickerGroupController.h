//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ALAssetsLibrary, NSString, PLAssertManager, UITableView;
@protocol PLImagePickerControllerDelegate;

@interface PLImagePickerGroupController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _dismissWhenComplete;
    _Bool _supportPreview;
    _Bool _supportTakePhoto;
    long long _maxNumberOfPhotos;
    id <PLImagePickerControllerDelegate> _delegate;
    unsigned long long _type;
    UITableView *_tableView;
    ALAssetsLibrary *_assetsLibrary;
    PLAssertManager *_assertModel;
}

@property(retain, nonatomic) PLAssertManager *assertModel; // @synthesize assertModel=_assertModel;
@property(retain, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool supportTakePhoto; // @synthesize supportTakePhoto=_supportTakePhoto;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool supportPreview; // @synthesize supportPreview=_supportPreview;
@property(nonatomic) _Bool dismissWhenComplete; // @synthesize dismissWhenComplete=_dismissWhenComplete;
@property(nonatomic) __weak id <PLImagePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxNumberOfPhotos; // @synthesize maxNumberOfPhotos=_maxNumberOfPhotos;
- (void).cxx_destruct;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)rightBarBtnPressed;
- (void)setNavigationBar;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

