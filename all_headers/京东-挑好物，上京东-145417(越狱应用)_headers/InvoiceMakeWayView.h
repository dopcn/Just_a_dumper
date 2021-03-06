//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDContentItem.h"

@class InvoicePutTypeModel, JDButton, NSArray, NSMutableArray, UILabel, UIView;
@protocol InvoiceMakeWayDelagate;

@interface InvoiceMakeWayView : JDContentItem
{
    InvoicePutTypeModel *_putTypeModel;
    id <InvoiceMakeWayDelagate> _invoiceMakeWayDelegate;
    UILabel *_titleLabel;
    JDButton *_alongGoodsInvoiceBtn;
    JDButton *_aloneMailInvoiceBtn;
    JDButton *_togatherInvoiceBtn;
    UILabel *_explainLabel;
    NSMutableArray *_btnArrays;
    NSArray *_putTypeModelArray;
    UIView *_lineViewBottom;
}

@property(retain, nonatomic) UIView *lineViewBottom; // @synthesize lineViewBottom=_lineViewBottom;
@property(retain, nonatomic) NSArray *putTypeModelArray; // @synthesize putTypeModelArray=_putTypeModelArray;
@property(retain, nonatomic) NSMutableArray *btnArrays; // @synthesize btnArrays=_btnArrays;
@property(retain, nonatomic) UILabel *explainLabel; // @synthesize explainLabel=_explainLabel;
@property(retain, nonatomic) JDButton *togatherInvoiceBtn; // @synthesize togatherInvoiceBtn=_togatherInvoiceBtn;
@property(retain, nonatomic) JDButton *aloneMailInvoiceBtn; // @synthesize aloneMailInvoiceBtn=_aloneMailInvoiceBtn;
@property(retain, nonatomic) JDButton *alongGoodsInvoiceBtn; // @synthesize alongGoodsInvoiceBtn=_alongGoodsInvoiceBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <InvoiceMakeWayDelagate> invoiceMakeWayDelegate; // @synthesize invoiceMakeWayDelegate=_invoiceMakeWayDelegate;
@property(retain, nonatomic) InvoicePutTypeModel *putTypeModel; // @synthesize putTypeModel=_putTypeModel;
- (void).cxx_destruct;
- (id)modelWithTapedBtnType:(unsigned long long)arg1;
- (void)btnTaped:(id)arg1;
- (struct CGSize)sizeTextWithString:(id)arg1 withFont:(id)arg2 constrainedWithWidth:(double)arg3;
- (void)refreshViewWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

