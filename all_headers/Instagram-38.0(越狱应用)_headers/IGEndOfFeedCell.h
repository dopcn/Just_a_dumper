//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGRemoteImageView, UIButton, UILabel;
@protocol IGEndOfFeedCellDelegate;

@interface IGEndOfFeedCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _Bool _hasImage;
    IGRemoteImageView *_imageView;
    UIButton *_dismissButton;
    id <IGEndOfFeedCellDelegate> _delegate;
}

+ (double)heightForWidth:(double)arg1 title:(id)arg2 subtitle:(id)arg3 hasImage:(_Bool)arg4;
@property(nonatomic) __weak id <IGEndOfFeedCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onDismissButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 hasImage:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

