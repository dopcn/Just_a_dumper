//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CDShoppingGoods, RACSubject;

@interface CDMallGoodsActivityView : UIView
{
    CDShoppingGoods *_goods;
    RACSubject *_signal;
}

+ (double)heightForGoods:(id)arg1;
@property(retain, nonatomic) RACSubject *signal; // @synthesize signal=_signal;
@property(retain, nonatomic) CDShoppingGoods *goods; // @synthesize goods=_goods;
- (void).cxx_destruct;
- (struct CGPoint)serviceUIElementRefreshWithTop:(double)arg1;
- (struct CGPoint)discountUIElementsRefresh;
- (id)contentLabelForContent:(id)arg1;
- (id)discountNameLabelForName:(id)arg1;
- (id)titleLabelForName:(id)arg1;

@end

