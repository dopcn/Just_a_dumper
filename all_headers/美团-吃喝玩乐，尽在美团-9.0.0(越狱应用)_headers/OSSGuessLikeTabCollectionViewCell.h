//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "OSSTabControlItemViewProtocol-Protocol.h"

@class NSString, UILabel;

@interface OSSGuessLikeTabCollectionViewCell : UICollectionViewCell <OSSTabControlItemViewProtocol>
{
    UILabel *_textLabel;
}

+ (double)viewLengthForData:(id)arg1;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

