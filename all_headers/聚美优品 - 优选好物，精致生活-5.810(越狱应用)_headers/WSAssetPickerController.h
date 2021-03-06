//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NSArray, WSAlbumTableViewController, WSAssetPickerState;

@interface WSAssetPickerController : UINavigationController
{
    WSAssetPickerState *_assetPickerState;
    unsigned long long _selectedCount;
    long long _originalStatusBarStyle;
    WSAlbumTableViewController *_albumTableViewController;
}

@property(retain, nonatomic) WSAlbumTableViewController *albumTableViewController; // @synthesize albumTableViewController=_albumTableViewController;
@property(nonatomic) long long originalStatusBarStyle; // @synthesize originalStatusBarStyle=_originalStatusBarStyle;
@property(nonatomic) unsigned long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(retain, nonatomic) WSAssetPickerState *assetPickerState; // @synthesize assetPickerState=_assetPickerState;
- (void).cxx_destruct;
- (void)setAssetsFilter:(id)arg1;
- (void)setAssetGroupTypes:(unsigned long long)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSArray *selectedAssets; // @dynamic selectedAssets;

@end

