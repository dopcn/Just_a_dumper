//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface RedPaperFooterView : UICollectionReusableView
{
    UILabel *_textLabel;
}

+ (id)nib;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)setCollectionViewFoot:(id)arg1 withRedPaper:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

@end

