//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ViewController.h"

@class NWCommentTextView, UIImage, UIImageView;

@interface ShopAddSceneViewController : ViewController
{
    UIImageView *_backgroudImageView;
    UIImageView *_picImageView;
    NWCommentTextView *_commentView;
    long long _shopId;
    UIImage *_photoImage;
}

@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property(nonatomic) long long shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NWCommentTextView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UIImageView *picImageView; // @synthesize picImageView=_picImageView;
@property(retain, nonatomic) UIImageView *backgroudImageView; // @synthesize backgroudImageView=_backgroudImageView;
- (void).cxx_destruct;
- (void)submit:(id)arg1;
- (_Bool)isSubmit;
- (long long)commentMinLength;
- (id)alertBtnTitle;
- (id)commentAlertTitleMinLength;
- (id)commentAlertTitleNilLength;
- (id)placeHolder;
- (id)viewControllerTitle;
- (id)submitBtnTitle;
- (void)configUIBarButtonItems;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1 shopid:(long long)arg2;

@end

