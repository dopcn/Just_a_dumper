//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DCShoppingCartDetailHeaderModel, NSArray;

@interface DCShoppingCartDetailViewModel : NSObject
{
    DCShoppingCartDetailHeaderModel *_detailHeaderModel;
    NSArray *_cellModels;
}

@property(copy, nonatomic) NSArray *cellModels; // @synthesize cellModels=_cellModels;
@property(retain, nonatomic) DCShoppingCartDetailHeaderModel *detailHeaderModel; // @synthesize detailHeaderModel=_detailHeaderModel;
- (void).cxx_destruct;
- (void)mergeIMUnreadCount:(id)arg1;
- (id)initWithShoppingCartApiModel:(id)arg1;

@end

