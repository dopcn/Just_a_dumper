//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSMutableArray;
@protocol XSTCustomEmoViewCollectionViewCellDelegate;

@interface XSTCustomEmoViewCollectionViewCell : UICollectionViewCell
{
    NSMutableArray *_emoMutArr;
    id <XSTCustomEmoViewCollectionViewCellDelegate> _delegate;
    NSMutableArray *_imgArrs;
    NSMutableArray *_labelArrs;
}

@property(retain, nonatomic) NSMutableArray *labelArrs; // @synthesize labelArrs=_labelArrs;
@property(retain, nonatomic) NSMutableArray *imgArrs; // @synthesize imgArrs=_imgArrs;
@property(nonatomic) __weak id <XSTCustomEmoViewCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *emoMutArr; // @synthesize emoMutArr=_emoMutArr;
- (void).cxx_destruct;
- (void)pressIV:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

