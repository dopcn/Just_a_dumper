//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol VSSnapUpCollectionHeaderFooterViewModelProtocol;

@interface VSSnapUpSectionModel : NSObject
{
    id <VSSnapUpCollectionHeaderFooterViewModelProtocol> _headerViewModel;
    NSArray *_cellModelArray;
    double _collectionViewLayoutMinimumLineSpacing;
    double _collectionViewLayoutMinimumInteritemSpacing;
    struct UIEdgeInsets _collectionViewLayoutInset;
}

@property(nonatomic) double collectionViewLayoutMinimumInteritemSpacing; // @synthesize collectionViewLayoutMinimumInteritemSpacing=_collectionViewLayoutMinimumInteritemSpacing;
@property(nonatomic) double collectionViewLayoutMinimumLineSpacing; // @synthesize collectionViewLayoutMinimumLineSpacing=_collectionViewLayoutMinimumLineSpacing;
@property(nonatomic) struct UIEdgeInsets collectionViewLayoutInset; // @synthesize collectionViewLayoutInset=_collectionViewLayoutInset;
@property(retain, nonatomic) NSArray *cellModelArray; // @synthesize cellModelArray=_cellModelArray;
@property(retain, nonatomic) id <VSSnapUpCollectionHeaderFooterViewModelProtocol> headerViewModel; // @synthesize headerViewModel=_headerViewModel;
- (void).cxx_destruct;
- (id)cellModelAtRow:(long long)arg1;
- (unsigned long long)numberOfRows;
- (id)initWithHeaderViewModel:(id)arg1 cellModelArray:(id)arg2;

@end

