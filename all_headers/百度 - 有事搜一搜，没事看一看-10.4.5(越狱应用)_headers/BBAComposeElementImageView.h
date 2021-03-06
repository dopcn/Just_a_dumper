//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BBAComposePublishElementImage, NSMutableArray, UIButton;
@protocol BBAComposeElementImageViewDelegate;

@interface BBAComposeElementImageView : UIView
{
    id <BBAComposeElementImageViewDelegate> _delegate;
    BBAComposePublishElementImage *_imageElement;
    NSMutableArray *_imageViews;
    UIButton *_addButton;
}

@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) BBAComposePublishElementImage *imageElement; // @synthesize imageElement=_imageElement;
@property(nonatomic) __weak id <BBAComposeElementImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickDelete:(id)arg1;
- (void)imageAddClick:(id)arg1;
- (void)imageClick:(id)arg1;
- (void)refresh;
- (id)initWithFrame:(struct CGRect)arg1;

@end

