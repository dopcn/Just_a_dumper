//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray;

@interface CHCompareSpecCell : UICollectionViewCell
{
    struct CGSize size;
    id _delegate;
    NSArray *_listArray;
}

@property(retain, nonatomic) NSArray *listArray; // @synthesize listArray=_listArray;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onButtonClick:(id)arg1;
- (void)reloadButtonState:(id)arg1;
- (void)setData:(id)arg1;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

