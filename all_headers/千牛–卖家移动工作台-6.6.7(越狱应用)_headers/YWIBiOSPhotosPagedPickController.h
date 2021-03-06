//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YWIBiOSPhotosPagedController.h"

@class NSString, UIView, WXICloudLoadingView, YWAVPlayer, YWIBToolView, YWIBiOSPhotosPickToolItem4Check, YWIBiOSPhotosPickToolItem4NormalButton, YWIBiOSPhotosPickToolItem4Original;

@interface YWIBiOSPhotosPagedPickController : YWIBiOSPhotosPagedController
{
    _Bool _originalChecked;
    _Bool _pickHideOrigin;
    UIView *_topBackView;
    YWIBToolView *_topToolView;
    YWIBToolView *_bottomToolView;
    WXICloudLoadingView *_cloudLoadingView;
    CDUnknownBlockType _editBlock;
    CDUnknownBlockType _doneBlock;
    CDUnknownBlockType _originalCheckedBlock;
    long long _maxCount;
    NSString *_pickDoneName;
    UIView *_bottomXView;
    YWIBiOSPhotosPickToolItem4Check *_itemCheck;
    YWIBiOSPhotosPickToolItem4NormalButton *_itemBack;
    YWIBiOSPhotosPickToolItem4NormalButton *_itemPreView;
    YWIBiOSPhotosPickToolItem4NormalButton *_itemEdit;
    YWIBiOSPhotosPickToolItem4NormalButton *_itemSend;
    YWIBiOSPhotosPickToolItem4Original *_itemOriginal;
    YWAVPlayer *_avplayer;
}

@property(retain, nonatomic) YWAVPlayer *avplayer; // @synthesize avplayer=_avplayer;
@property(retain, nonatomic) YWIBiOSPhotosPickToolItem4Original *itemOriginal; // @synthesize itemOriginal=_itemOriginal;
@property(retain, nonatomic) YWIBiOSPhotosPickToolItem4NormalButton *itemSend; // @synthesize itemSend=_itemSend;
@property(retain, nonatomic) YWIBiOSPhotosPickToolItem4NormalButton *itemEdit; // @synthesize itemEdit=_itemEdit;
@property(retain, nonatomic) YWIBiOSPhotosPickToolItem4NormalButton *itemPreView; // @synthesize itemPreView=_itemPreView;
@property(retain, nonatomic) YWIBiOSPhotosPickToolItem4NormalButton *itemBack; // @synthesize itemBack=_itemBack;
@property(retain, nonatomic) YWIBiOSPhotosPickToolItem4Check *itemCheck; // @synthesize itemCheck=_itemCheck;
@property(retain, nonatomic) UIView *bottomXView; // @synthesize bottomXView=_bottomXView;
@property(nonatomic) _Bool pickHideOrigin; // @synthesize pickHideOrigin=_pickHideOrigin;
@property(copy, nonatomic) NSString *pickDoneName; // @synthesize pickDoneName=_pickDoneName;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) _Bool originalChecked; // @synthesize originalChecked=_originalChecked;
@property(copy, nonatomic) CDUnknownBlockType originalCheckedBlock; // @synthesize originalCheckedBlock=_originalCheckedBlock;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(copy, nonatomic) CDUnknownBlockType editBlock; // @synthesize editBlock=_editBlock;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)doubleGesture;
- (void)actionTap:(id)arg1;
- (void)actionAssetCheck:(id)arg1;
- (void)actionBack:(id)arg1;
- (void)actionSend:(id)arg1;
- (void)actionOriginal:(id)arg1;
- (void)actionEdit:(id)arg1;
- (void)_updateToolView:(id)arg1;
- (unsigned long long)_calculateTotalSize;
@property(readonly, nonatomic) WXICloudLoadingView *cloudLoadingView; // @synthesize cloudLoadingView=_cloudLoadingView;
@property(readonly, nonatomic) YWIBToolView *bottomToolView; // @synthesize bottomToolView=_bottomToolView;
@property(readonly, nonatomic) YWIBToolView *topToolView; // @synthesize topToolView=_topToolView;
@property(readonly, nonatomic) UIView *topBackView; // @synthesize topBackView=_topBackView;
- (void)_initBottomItems;
- (void)_initTopItems;
- (void)exitPlay;
- (void)videoPlay:(id)arg1;
- (void)configItemShowWithAsset:(id)arg1;
- (void)configPlayButtonForCell:(id)arg1 withAsset:(id)arg2;
- (void)doProgressHandler:(id)arg1 aProgress:(double)arg2 dictInfo:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)configExtraInfoForCell:(id)arg1 indexPath:(id)arg2 withAsset:(id)arg3;
- (void)changeCheckResults:(id)arg1;
- (void)configCheckStatusForCell:(id)arg1 indexPath:(id)arg2 withAsset:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)initWithRootItem:(id)arg1;

@end

