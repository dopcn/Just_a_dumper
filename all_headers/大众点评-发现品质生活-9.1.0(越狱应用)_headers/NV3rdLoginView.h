//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NVHorizontalLine, UILabel;

@interface NV3rdLoginView : UIView
{
    NSMutableArray *_btnArray;
    NVHorizontalLine *_horizontaline1;
    NVHorizontalLine *_horizontaline2;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NVHorizontalLine *horizontaline2; // @synthesize horizontaline2=_horizontaline2;
@property(retain, nonatomic) NVHorizontalLine *horizontaline1; // @synthesize horizontaline1=_horizontaline1;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)removeButton:(id)arg1;
- (void)addButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

