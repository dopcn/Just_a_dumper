//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIImageView;
@protocol TBCLegoMultiImageViewDelegate;

@interface TBCLegoMultiImageView : UIView
{
    id <TBCLegoMultiImageViewDelegate> _delegate;
    UIImageView *_lastImageView;
    NSMutableArray *_imageViews;
    NSArray *_imageDataArray;
}

+ (double)multiImageHeightForWidth:(double)arg1;
@property(retain, nonatomic) NSArray *imageDataArray; // @synthesize imageDataArray=_imageDataArray;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) UIImageView *lastImageView; // @synthesize lastImageView=_lastImageView;
@property(nonatomic) __weak id <TBCLegoMultiImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleImageTap:(id)arg1;
- (void)bindImageArray:(id)arg1 contentWidth:(double)arg2;

@end

