//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CategoryModel;

@interface CategoryViewModel : NSObject
{
    long long _listsCount;
    CategoryModel *_model;
}

@property(retain, nonatomic) CategoryModel *model; // @synthesize model=_model;
@property(nonatomic) long long listsCount; // @synthesize listsCount=_listsCount;
- (void).cxx_destruct;
- (id)titleForIndex:(long long)arg1;
- (id)coverURLForIndex:(long long)arg1;
- (void)getDataCompletionHandle:(CDUnknownBlockType)arg1;

@end

