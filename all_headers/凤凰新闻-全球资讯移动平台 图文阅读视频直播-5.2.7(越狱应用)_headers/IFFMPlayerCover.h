//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IFImageView;

@interface IFFMPlayerCover : UIView
{
    _Bool _animating;
    IFImageView *_coverImageView;
}

@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) IFImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)stopSpin;
- (void)startSpin;
- (void)setCoverUrl:(id)arg1;
- (void)setCoverImage:(id)arg1;
- (void)_createCoverItems;
- (id)initWithFrame:(struct CGRect)arg1;

@end

