//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OCHTMLDocument;

@interface OCSS : NSObject
{
    OCHTMLDocument *_document;
}

- (void).cxx_destruct;
- (id)getComputedStyleForSelector:(id)arg1;
- (void)addStyleSheetWithContentsOfURL:(id)arg1;
- (void)addStyleSheetWithContentsOfData:(id)arg1;
@property(readonly) OCHTMLDocument *document;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfData:(id)arg1;

@end

