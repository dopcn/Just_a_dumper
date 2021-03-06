//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class CTIMEmotionManager, CTIMProgressView, NSArray, NSString, NSURLSessionTask, UIButton, UIPageControl, UIScrollView;

@interface CTIMEmotionKeyBoardView : UIView <UIScrollViewDelegate>
{
    _Bool _needEmotion;
    NSArray *_emojiArr;
    NSArray *_emotionArr;
    UIScrollView *_scFace;
    CDUnknownBlockType _block;
    CDUnknownBlockType _sendBlock;
    CDUnknownBlockType _deleteBlock;
    CDUnknownBlockType _sendBigBlock;
    UIView *_toolBar;
    UIPageControl *_pageC;
    UIButton *_sendBtn;
    UIButton *_emojiBtn;
    UIButton *_youyouBtn;
    CTIMEmotionManager *_faceManager;
    UIView *_emojiView;
    UIView *_emotionView;
    UIView *_loadView;
    long long _emojiPageC;
    long long _emotionPageC;
    long long _emojiPage;
    long long _emotionPage;
    long long _totalPages;
    CTIMProgressView *_progressV;
    UIButton *_cancelbtn;
    UIButton *_downloadBtn;
    NSURLSessionTask *_downloadTask;
}

@property(retain, nonatomic) NSURLSessionTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) UIButton *downloadBtn; // @synthesize downloadBtn=_downloadBtn;
@property(retain, nonatomic) UIButton *cancelbtn; // @synthesize cancelbtn=_cancelbtn;
@property(retain, nonatomic) CTIMProgressView *progressV; // @synthesize progressV=_progressV;
@property(nonatomic) long long totalPages; // @synthesize totalPages=_totalPages;
@property(nonatomic) long long emotionPage; // @synthesize emotionPage=_emotionPage;
@property(nonatomic) long long emojiPage; // @synthesize emojiPage=_emojiPage;
@property(nonatomic) long long emotionPageC; // @synthesize emotionPageC=_emotionPageC;
@property(nonatomic) long long emojiPageC; // @synthesize emojiPageC=_emojiPageC;
@property(retain, nonatomic) UIView *loadView; // @synthesize loadView=_loadView;
@property(retain, nonatomic) UIView *emotionView; // @synthesize emotionView=_emotionView;
@property(retain, nonatomic) UIView *emojiView; // @synthesize emojiView=_emojiView;
@property(retain, nonatomic) CTIMEmotionManager *faceManager; // @synthesize faceManager=_faceManager;
@property(retain, nonatomic) UIButton *youyouBtn; // @synthesize youyouBtn=_youyouBtn;
@property(retain, nonatomic) UIButton *emojiBtn; // @synthesize emojiBtn=_emojiBtn;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UIPageControl *pageC; // @synthesize pageC=_pageC;
@property(retain, nonatomic) UIView *toolBar; // @synthesize toolBar=_toolBar;
@property(copy, nonatomic) CDUnknownBlockType sendBigBlock; // @synthesize sendBigBlock=_sendBigBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIScrollView *scFace; // @synthesize scFace=_scFace;
@property(retain, nonatomic) NSArray *emotionArr; // @synthesize emotionArr=_emotionArr;
@property(retain, nonatomic) NSArray *emojiArr; // @synthesize emojiArr=_emojiArr;
@property(nonatomic) _Bool needEmotion; // @synthesize needEmotion=_needEmotion;
- (void).cxx_destruct;
- (void)setFaceKeyBoardSendBigBlock:(CDUnknownBlockType)arg1;
- (void)setFaceKeyBoardDeleteBlock:(CDUnknownBlockType)arg1;
- (void)setFaceKeyBoardSendBlock:(CDUnknownBlockType)arg1;
- (void)setFaceKeyBoardBlock:(CDUnknownBlockType)arg1;
- (void)tapEmotion:(id)arg1;
- (void)tapEmoji:(id)arg1;
- (void)tapSendBtn;
- (void)tapDeleteBtn;
- (void)setToolBar;
- (void)tapEmojiBtn;
- (void)tapYouyouBtn;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)closeTip:(id)arg1;
- (void)closeTipGesture:(id)arg1;
- (_Bool)isFirstDownload;
- (void)firstDownloadEmotion;
- (void)downloadFileWithRequest:(id)arg1 filePath:(id)arg2 progress:(CDUnknownBlockType)arg3 result:(CDUnknownBlockType)arg4;
- (void)downloadEmotionBags;
- (void)loadEmotionBags:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (void)panGesture:(id)arg1;
- (void)setEmotionFrame;
- (void)longPressGesture:(id)arg1;
- (id)delateBtn:(struct CGRect)arg1;
- (id)emojiButton:(struct CGRect)arg1 strIMG:(id)arg2;
- (void)setEmojiFrame;
- (void)showEmotionFaces;
- (void)showEmojiFaces;
- (void)fetchAllFaces;
- (void)loadKeyBoardView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

