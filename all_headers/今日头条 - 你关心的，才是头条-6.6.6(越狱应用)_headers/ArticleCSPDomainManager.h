//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ArticleCSPDomainManager : NSObject
{
    NSDictionary *_domainList;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSDictionary *domainList; // @synthesize domainList=_domainList;
- (void).cxx_destruct;
- (id)headerForRequest:(id)arg1;
- (void)refreshDomainList;

@end

