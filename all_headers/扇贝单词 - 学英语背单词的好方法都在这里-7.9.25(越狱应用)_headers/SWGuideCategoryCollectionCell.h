//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface SWGuideCategoryCollectionCell : UICollectionViewCell
{
    NSString *_categoryName;
    UIColor *_textColor;
    UILabel *_categoryLabel;
}

+ (unsigned long long)hotCellsCount;
+ (id)cellID;
@property(retain, nonatomic) UILabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (void).cxx_destruct;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

