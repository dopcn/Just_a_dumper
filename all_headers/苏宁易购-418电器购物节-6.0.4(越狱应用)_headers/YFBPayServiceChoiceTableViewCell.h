//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UIButton, UIImageView;

@interface YFBPayServiceChoiceTableViewCell : UITableViewCell
{
    NSMutableArray *choiceBtnContentNSMA;
    UIButton *_choiceBtn;
    UIImageView *_arrowUIImageView;
    id _owner;
}

@property(retain, nonatomic) id owner; // @synthesize owner=_owner;
@property(nonatomic) UIImageView *arrowUIImageView; // @synthesize arrowUIImageView=_arrowUIImageView;
@property(nonatomic) UIButton *choiceBtn; // @synthesize choiceBtn=_choiceBtn;
- (void).cxx_destruct;
- (void)setCell:(id)arg1 choiceContent:(id)arg2 companyBtnIfTouch:(_Bool)arg3 owner:(id)arg4;
- (void)awakeFromNib;

@end

