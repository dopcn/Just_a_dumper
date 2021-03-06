//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, TTCollectionGroupModel;

@interface TTEmojiManager : NSObject
{
    TTCollectionGroupModel *_nextSelecteItem;
    NSMutableArray *_cosmeticsArray;
    TTCollectionGroupModel *_selectedItem;
    TTCollectionGroupModel *_selectedGroup;
    NSMutableDictionary *_contentOffsets;
}

+ (struct CGPoint)getContentOffset:(id)arg1;
+ (void)setContentOffset:(struct CGPoint)arg1 sid:(id)arg2;
+ (id)restore:(id)arg1 downloadModel:(id)arg2;
+ (id)maskShadowImage;
+ (id)getItemRedPointImage:(id)arg1;
+ (id)getGroupRedPointImage:(id)arg1;
+ (_Bool)showRedPoint:(id)arg1;
+ (double)collectionViewContentOffsetHeight;
+ (id)btnNonImage;
+ (id)iconType:(id)arg1;
+ (id)videoDeleteModel;
+ (_Bool)nonItem:(id)arg1;
+ (id)modelDownloadKey;
+ (id)getSelectedGroup;
+ (void)setSelectedGroup:(id)arg1;
+ (id)getSelectedItem;
+ (void)setSelectedItem:(id)arg1;
+ (double)groupMinimumInteritemSpacing;
+ (double)groupMinimumLineSpacing;
+ (struct UIEdgeInsets)emojiGroupEdgeInsets:(id)arg1 collectionView:(id)arg2;
+ (struct UIEdgeInsets)groupEdgeInsets:(id)arg1 collectionView:(id)arg2;
+ (struct CGSize)groupSize:(id)arg1;
+ (double)iconMinimumInteritemSpacing;
+ (double)iconMinimumLineSpacing;
+ (struct UIEdgeInsets)iconEdgeInsets;
+ (struct CGSize)iconSize;
+ (_Bool)needDownloadModel:(id)arg1;
+ (_Bool)showProcess:(id)arg1;
+ (_Bool)showDownload:(id)arg1;
+ (id)transImageView:(id)arg1 model:(id)arg2;
+ (id)transGroups:(id)arg1;
+ (id)transItems:(id)arg1;
+ (id)iconPlaceholder;
+ (id)iconDownloadMask;
+ (id)iconDownloadCamera;
+ (id)iconDownload;
+ (id)nilText;
+ (id)groupFont;
+ (id)nilFont;
+ (double)groupHeight;
+ (double)groupWidth;
+ (id)shareInstance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *contentOffsets; // @synthesize contentOffsets=_contentOffsets;
@property(retain, nonatomic) TTCollectionGroupModel *selectedGroup; // @synthesize selectedGroup=_selectedGroup;
@property(retain, nonatomic) TTCollectionGroupModel *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NSMutableArray *cosmeticsArray; // @synthesize cosmeticsArray=_cosmeticsArray;
@property(retain, nonatomic) TTCollectionGroupModel *nextSelecteItem; // @synthesize nextSelecteItem=_nextSelecteItem;
- (void).cxx_destruct;
- (void)downloadModel:(id)arg1 gridResModel:(id)arg2;
- (double)getGroupWidthWithIndex:(id)arg1;

@end

