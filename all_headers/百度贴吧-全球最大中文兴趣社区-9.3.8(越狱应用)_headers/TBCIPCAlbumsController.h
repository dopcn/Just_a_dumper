//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCSlideBackViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TBCIPCAssetsViewController, TBCMultiImagePickerController, UITableView;

@interface TBCIPCAlbumsController : TBCSlideBackViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_assetsGroups;
    TBCMultiImagePickerController *_imagePickerController;
    TBCIPCAssetsViewController *_assetsViewController;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *assetsGroups; // @synthesize assetsGroups=_assetsGroups;
@property(nonatomic) TBCIPCAssetsViewController *assetsViewController; // @synthesize assetsViewController=_assetsViewController;
@property(nonatomic) TBCMultiImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
- (void)dealloc;
- (void)cancelAction:(id)arg1;
- (void)reloadData;
- (void)loadAssetsGroups;
- (void)prepareNavigationTransition:(_Bool)arg1;
- (_Bool)isTheSameAssetsGroup:(id)arg1;
- (void)onChangeAlbumAssetsGroup:(id)arg1 row:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)createTableView;
- (void)didReceiveMemoryWarning;
- (void)layoutCancelButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithImagePickerController:(id)arg1 andAssetsViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

