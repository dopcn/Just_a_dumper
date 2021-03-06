//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMPayStatusBaseTableViewCell.h"

#import "JMPayStatusCellProtocol-Protocol.h"

@class JMPayStatusHeaderCellViewModel, NSString, UIImageView, UILabel;

@interface JMPayStatusHeaderTableViewCell : JMPayStatusBaseTableViewCell <JMPayStatusCellProtocol>
{
    UIImageView *_flagImageView;
    UILabel *_contentLbl;
    JMPayStatusHeaderCellViewModel *_viewModel;
}

+ (double)heightForCellInTableView:(id)arg1 viewModel:(id)arg2 atIndex:(id)arg3;
@property(retain, nonatomic) JMPayStatusHeaderCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UILabel *contentLbl; // @synthesize contentLbl=_contentLbl;
@property(nonatomic) __weak UIImageView *flagImageView; // @synthesize flagImageView=_flagImageView;
- (void).cxx_destruct;
- (void)updateCellWithViewModel:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

