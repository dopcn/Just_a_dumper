//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CTImageView, NSIndexPath;

@interface CTDiscoverDescriptionLayerImageCell : UICollectionViewCell
{
    NSIndexPath *_indexPath;
    CTImageView *_imageView;
}

@property(retain, nonatomic) CTImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)updateImageURL:(id)arg1 indexPath:(id)arg2;
- (void)awakeFromNib;

@end

