//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPMYOUTHCell.h"

@class SNPMYOUTHQuestionDTO, UIView;

@interface SNPMYOUTHVedioQuestionCell : SNPMYOUTHCell
{
    SNPMYOUTHQuestionDTO *_questionDTO;
    UIView *_headView;
    UIView *_separatorLine;
    UIView *_questionView;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UIView *questionView; // @synthesize questionView=_questionView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) SNPMYOUTHQuestionDTO *questionDTO; // @synthesize questionDTO=_questionDTO;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

