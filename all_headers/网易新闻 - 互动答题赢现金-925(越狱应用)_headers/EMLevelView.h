//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel;

@interface EMLevelView : UIView
{
    UILabel *_label;
    UIImageView *_bgImageView;
    UIImage *_imageLevel19;
    UIImage *_imageLevel34;
    UIImage *_imageLevel49;
    UIImage *_imageLevel59;
    UIImage *_imageLevel79;
    UIImage *_imageLevel99;
}

+ (id)getImageWithWealthLevel:(unsigned long long)arg1;
+ (id)shared;
+ (void)load;
@property(retain, nonatomic) UIImage *imageLevel99; // @synthesize imageLevel99=_imageLevel99;
@property(retain, nonatomic) UIImage *imageLevel79; // @synthesize imageLevel79=_imageLevel79;
@property(retain, nonatomic) UIImage *imageLevel59; // @synthesize imageLevel59=_imageLevel59;
@property(retain, nonatomic) UIImage *imageLevel49; // @synthesize imageLevel49=_imageLevel49;
@property(retain, nonatomic) UIImage *imageLevel34; // @synthesize imageLevel34=_imageLevel34;
@property(retain, nonatomic) UIImage *imageLevel19; // @synthesize imageLevel19=_imageLevel19;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setLevel:(unsigned long long)arg1 grade:(unsigned long long)arg2 withOfficialDefine:(unsigned long long)arg3;
- (void)setLevel:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

