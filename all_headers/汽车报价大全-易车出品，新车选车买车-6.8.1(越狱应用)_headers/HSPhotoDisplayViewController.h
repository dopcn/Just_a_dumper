//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EGOPhotoViewController.h"

#import "EGOPhotoSource-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class MBProgressHUDNew, NSArray, NSString, UIButton, UILabel, UIView;
@protocol HSPhotoDisplayViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface HSPhotoDisplayViewController : EGOPhotoViewController <EGOPhotoSource, UIAlertViewDelegate>
{
    UIView *botBar;
    UIView *topBar;
    UILabel *pageNumLabel;
    _Bool isFullScreen;
    UIView *_tipNavView;
    MBProgressHUDNew *loadingIndicator;
    UIButton *downloadButton;
    UIButton *share;
    _Bool _isEdit;
    _Bool _needDownload;
    _Bool _needShare;
    _Bool _notNeedPageNumber;
    _Bool _isFromCommunity;
    NSArray *photos;
    long long numberOfPhotos;
    NSArray *_ImageUrlArray;
    NSArray *_thumbFileUrlArray;
    long long _defaultPageIndex;
    NSString *_urlString;
    NSString *_newsTitle;
    id <HSPhotoDisplayViewControllerDelegate> _delegate;
    NSString *_topicId;
    NSArray *_photosArray;
}

@property(retain, nonatomic) NSArray *photosArray; // @synthesize photosArray=_photosArray;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) id <HSPhotoDisplayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *newsTitle; // @synthesize newsTitle=_newsTitle;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) _Bool isFromCommunity; // @synthesize isFromCommunity=_isFromCommunity;
@property(nonatomic) _Bool notNeedPageNumber; // @synthesize notNeedPageNumber=_notNeedPageNumber;
@property(nonatomic) _Bool needShare; // @synthesize needShare=_needShare;
@property(nonatomic) _Bool needDownload; // @synthesize needDownload=_needDownload;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(nonatomic) long long defaultPageIndex; // @synthesize defaultPageIndex=_defaultPageIndex;
@property(retain, nonatomic) NSArray *thumbFileUrlArray; // @synthesize thumbFileUrlArray=_thumbFileUrlArray;
@property(retain, nonatomic) NSArray *ImageUrlArray; // @synthesize ImageUrlArray=_ImageUrlArray;
@property(readonly, nonatomic) NSArray *photos; // @synthesize photos;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)photoViewDidFinishLoading:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didShareToStatisticsPlatform:(id)arg1 urlString:(id)arg2;
- (void)didSelectSocialPlatform:(id)arg1 withSocialData:(id)arg2;
- (void)shareImage:(id)arg1;
- (void)back:(id)arg1;
- (void)setHeaderHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updatePageNum;
- (void)toggleBarsNotification:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
@property(readonly, nonatomic) long long numberOfPhotos; // @synthesize numberOfPhotos;
- (id)photoAtIndex:(long long)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)downloadImage:(id)arg1;
- (void)setupToolBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

