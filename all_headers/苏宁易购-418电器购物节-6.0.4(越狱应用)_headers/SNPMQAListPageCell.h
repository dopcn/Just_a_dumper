//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView;

@interface SNPMQAListPageCell : UITableViewCell
{
    UILabel *_titLbl;
    UIImageView *_answerBgView;
    UIButton *_askBtn;
    UIButton *_answerBtn;
    UIButton *_answer2Btn;
    UILabel *_answerLbl;
    UILabel *_answer2Lbl;
    UILabel *_moreLbl;
    UILabel *_timeLbl;
    UIView *_lineView;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *timeLbl; // @synthesize timeLbl=_timeLbl;
@property(retain, nonatomic) UILabel *moreLbl; // @synthesize moreLbl=_moreLbl;
@property(retain, nonatomic) UILabel *answer2Lbl; // @synthesize answer2Lbl=_answer2Lbl;
@property(retain, nonatomic) UILabel *answerLbl; // @synthesize answerLbl=_answerLbl;
@property(retain, nonatomic) UIButton *answer2Btn; // @synthesize answer2Btn=_answer2Btn;
@property(retain, nonatomic) UIButton *answerBtn; // @synthesize answerBtn=_answerBtn;
@property(retain, nonatomic) UIButton *askBtn; // @synthesize askBtn=_askBtn;
@property(retain, nonatomic) UIImageView *answerBgView; // @synthesize answerBgView=_answerBgView;
@property(retain, nonatomic) UILabel *titLbl; // @synthesize titLbl=_titLbl;
- (void).cxx_destruct;
- (void)refreshCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

