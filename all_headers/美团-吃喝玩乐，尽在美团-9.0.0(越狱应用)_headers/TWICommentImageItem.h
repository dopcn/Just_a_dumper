//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWIGroupBaseCollectionViewItem.h"

@class NSString, UIImage;

@interface TWICommentImageItem : TWIGroupBaseCollectionViewItem
{
    _Bool _isAddPicItem;
    NSString *_localIdentifier;
    NSString *_imageURLString;
    UIImage *_image;
    unsigned long long _index;
}

@property(nonatomic) _Bool isAddPicItem; // @synthesize isAddPicItem=_isAddPicItem;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
- (void).cxx_destruct;

@end

