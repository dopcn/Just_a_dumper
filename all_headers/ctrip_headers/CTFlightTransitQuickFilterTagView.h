//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol CTFlightTransitQuickFilterTagViewDelegate;

@interface CTFlightTransitQuickFilterTagView : UIView
{
    id <CTFlightTransitQuickFilterTagViewDelegate> _delegate;
    UILabel *_tagTitleLabel;
    UIImageView *_selectedImageView;
}

@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UILabel *tagTitleLabel; // @synthesize tagTitleLabel=_tagTitleLabel;
@property(nonatomic) __weak id <CTFlightTransitQuickFilterTagViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickTagView;
- (void)setViewIsSelected:(_Bool)arg1;
- (void)setViewWithTagModel:(id)arg1;
- (id)init;

@end

