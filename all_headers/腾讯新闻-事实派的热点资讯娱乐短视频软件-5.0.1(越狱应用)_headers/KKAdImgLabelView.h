//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QLSImageView, UILabel;

@interface KKAdImgLabelView : UIView
{
    QLSImageView *_imgView;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) QLSImageView *imgView; // @synthesize imgView=_imgView;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 frame:(struct CGRect)arg2 imgUrl:(id)arg3;

@end

