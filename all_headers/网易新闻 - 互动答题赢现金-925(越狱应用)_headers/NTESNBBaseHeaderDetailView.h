//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UIButton, UIImageView;

@interface NTESNBBaseHeaderDetailView : UIView
{
    UIButton *concernButton;
    UIImageView *_poster;
    UIImageView *_placeholder;
    UIView *_mask;
    UIActivityIndicatorView *_indicator;
    _Bool _concerned;
    NSString *_concernId;
    CDUnknownBlockType _concernBlock;
}

@property(copy, nonatomic) CDUnknownBlockType concernBlock; // @synthesize concernBlock=_concernBlock;
@property(nonatomic) _Bool concerned; // @synthesize concerned=_concerned;
@property(retain, nonatomic) NSString *concernId; // @synthesize concernId=_concernId;
- (void).cxx_destruct;
- (void)updateTheme;
- (void)updateHeaderWith:(id)arg1;
- (void)concernButtonClicked;
- (void)updateHeaderLayoutWithOffset:(double)arg1;
- (void)updateLayouts;
- (double)caculateRatioByOffset:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

