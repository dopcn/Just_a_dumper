//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseViewController.h"

#import "TBCEmojiPhotoViewControllerDelegate-Protocol.h"
#import "TBCFavoEmojiAlbumNavBarDelegate-Protocol.h"
#import "TBCImageUploadDelegate-Protocol.h"

@class NSMutableArray, NSString, TBCEmojiPhotoViewController, TBCFavoEmojiAlbumNavBar, TBCImageUpload, UIButton, UIView;
@protocol TBCFavoEmojiAlbumViewControllerDelegate;

@interface TBCFavoEmojiAlbumViewController : TBCBaseViewController <TBCEmojiPhotoViewControllerDelegate, TBCFavoEmojiAlbumNavBarDelegate, TBCImageUploadDelegate>
{
    id <TBCFavoEmojiAlbumViewControllerDelegate> _delegate;
    UIView *_emojiAlbumView;
    TBCEmojiPhotoViewController *_photpVc;
    UIButton *_navAddNumButton;
    TBCFavoEmojiAlbumNavBar *_navBar;
    NSMutableArray *_selectedEmojiPic;
    TBCImageUpload *_imageUpload;
    NSMutableArray *_albumEmojiBatch;
}

@property(retain, nonatomic) NSMutableArray *albumEmojiBatch; // @synthesize albumEmojiBatch=_albumEmojiBatch;
@property(retain, nonatomic) TBCImageUpload *imageUpload; // @synthesize imageUpload=_imageUpload;
@property(retain, nonatomic) NSMutableArray *selectedEmojiPic; // @synthesize selectedEmojiPic=_selectedEmojiPic;
@property(retain, nonatomic) TBCFavoEmojiAlbumNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIButton *navAddNumButton; // @synthesize navAddNumButton=_navAddNumButton;
@property(retain, nonatomic) TBCEmojiPhotoViewController *photpVc; // @synthesize photpVc=_photpVc;
@property(retain, nonatomic) UIView *emojiAlbumView; // @synthesize emojiAlbumView=_emojiAlbumView;
@property(nonatomic) __weak id <TBCFavoEmojiAlbumViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)failUploadEmoji;
- (id)imageUploadGifDataAtIndex:(int)arg1;
- (_Bool)imageUploadShouldGifAtIndex:(int)arg1;
- (_Bool)imageUploadShouldSaveOrigin;
- (int)imageUploadImageNum:(id)arg1;
- (int)imageUpload:(id)arg1 picTypeAtIndex:(int)arg2;
- (void)imageUpload:(id)arg1 imageDidUploadSuccess:(id)arg2;
- (void)imageUpload:(id)arg1 imageDidUploadFailure:(id)arg2;
- (void)imageUpload:(id)arg1 imageUploadSuccess:(id)arg2 imageIndex:(int)arg3;
- (id)imageUpload:(id)arg1 imageAtIndex:(int)arg2;
- (_Bool)imageUploadShouldAddWaterMark;
- (void)uploadImage;
- (void)albumBigEmojiBindDataFailed;
- (void)albumBigEmojiBindDataSucceed;
- (void)albumEmojiClickedWithItem:(id)arg1;
- (void)uploadPackageClick;
- (void)addEmojiPackgeDone;
- (void)cancelSelectEmojiClick;
- (void)setupConfig;
- (void)setupUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

