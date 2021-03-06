//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface TBCExceptionView : UIView
{
    NSString *_title;
    UIImage *_image;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    struct CGRect _titleRect;
    struct CGRect _imageRect;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
@property(nonatomic) struct CGRect titleRect; // @synthesize titleRect=_titleRect;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 image:(id)arg2 titleRect:(struct CGRect)arg3 imageRect:(struct CGRect)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

