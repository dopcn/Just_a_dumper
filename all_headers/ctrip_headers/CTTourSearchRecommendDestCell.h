//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CTTourSearchRecommendDestView, NSArray;

@interface CTTourSearchRecommendDestCell : UITableViewCell
{
    NSArray *_destArray;
    CTTourSearchRecommendDestView *_destView;
}

+ (double)caculateCellHeight:(id)arg1;
+ (id)nib;
@property(retain, nonatomic) CTTourSearchRecommendDestView *destView; // @synthesize destView=_destView;
@property(retain, nonatomic) NSArray *destArray; // @synthesize destArray=_destArray;
- (void).cxx_destruct;
- (void)bindDestArray:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)initDestView;
- (void)awakeFromNib;

@end

