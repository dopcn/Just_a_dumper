//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, TBCImageView, TBCPBBigEmojiItem;
@protocol TBCPBBigEmojiCollectionViewCellDelegate;

@interface TBCPBBigEmojiCollectionViewCell : UICollectionViewCell
{
    TBCPBBigEmojiItem *_emojiItem;
    id <TBCPBBigEmojiCollectionViewCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    TBCImageView *_emojiView;
}

@property(retain, nonatomic) TBCImageView *emojiView; // @synthesize emojiView=_emojiView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <TBCPBBigEmojiCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBCPBBigEmojiItem *emojiItem; // @synthesize emojiItem=_emojiItem;
- (void).cxx_destruct;
- (void)emojiViewTapped:(id)arg1;
- (void)emojiViewLongPressed:(id)arg1;
- (void)bindEmoji:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

